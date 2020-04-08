trait Monad[F[_]] {
  /** `A => F[A]` */
  def pure[A](a: A): F[A]

  /** `F[A] => (A => F[B]) => F[B]` */
  def flatMap[A, B](fa: F[A])(f: A => F[B]): F[B]

  /** `F[A] => (A => B) => F[B]` */
  def map[A, B](fa: F[A])(f: A => B): F[B] =
    flatMap(fa)(a => pure(f(a)))

  /** `F[F[A]] => F[A]` */
  def flatten[A](ffa: F[F[A]]): F[A] =
    flatMap(ffa)(fa => fa)

  /** `F[A] => (A => F[B]) => F[A]` */
  def flatTap[A, B](fa: F[A])(f: A => F[B]): F[A] =
    flatMap(fa)(a => as(f(a))(a))

  /** `F[A] => B => F[B]` */
  def as[A, B](fa: F[A])(b: B): F[B] =
    map(fa)(_ => b)

  /** `F[A] => F[Unit]` */
  def void[A](fa: F[A]): F[Unit] =
    as(fa)(())
}
