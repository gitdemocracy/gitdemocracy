# GitDemocracy

Welcome to GitDemocracy, a repo where everyone can send a PR for any text and vote for/against an PR.

This repo is simulataneously both a game and an experiment.

"What if there was an open constitution on the internet that anyone could contribute to, one everyone could vote for?" was a shower idea I got. I thought a bit more afterwards and decided that it'd be an interesting idea to do something like this, but one where it was any sort of text, not just laws, and that's what GitDemocracy is.

BDFL: @aveao

## Rules

### Basic Rules

- Everyone with a Github account can send a PR.
- - You may only have 3 (three) PRs open-for-voting at once.
- - PRs currently accepting votes may not be updated. Updating it will get it closed. This behavior may changed in the future to merge the inital proposal.
- Each PR that's being voted on has a day (24 hours). 
- - After this period, it'll either be merged or closed, based on the majority of votes.
- You may vote for or against the PR by reacting to it with a :thumbsup: or a :thumbsdown:.
- - **Only accounts created before 2020-01-01 00:00 (UTC) may vote.**
- Use issues for WIP PRs.
- - Don't submit others' WIP PRs unless they haven't replied to mentions in the thread for 7 days (168 hours).
- - - Abusing this behavior (both as OP or wannabe PR submitter) will get you banned from the organization.

### Content Rules

- PRs proposing changes to existing files of allowed filetypes are allowed.
- - Unless they're to banned files, see below. Under specific circumstances, changes to these files may be accepted by BDFL only (changes to prevent loopholes in rules, wording improvements etc).
- PRs deleting existing files are currently NOT allowed.
- One may not send a PR with a content that's too similar to one that's already in voting. This is up to discretion of the BDFL, but may also be automated in the future.
- - You should wait until the other PR is closed or merged.
- - If it gets merged, you may send a PR with your changes.
- No spam. File contents may not include physical addresses or phone numbers. Website addresses are allowed as long as their intent is not spam.
- - Nothing copyrighted.
- - Basically, nothing that may get this repo banned, at BDFL's discretion.
- - Please also try to keep PR sizes not-huge, so that Github doesn't block the repo.

### Allowed filetypes

- `.md` files. As this repo is on Github, they'll be rendered with [GFM](https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax), so keep that in mind if you want your PRs to look good.
- `.txt` files
- `.tex` files
- Code files. If you're pushing an entire project, please try to contain it in a relevant folder.
- - Nothing that's binary. This includes but isn't limited to build artifacts, images or any other assets.
- - - Things like icons may be used in form of byte arrays or be procedurally generated.

### Banned files

- `README.md`
- `LICENSE` (also violates filetype whitelist)
- `.gitignore` (also violates filetype whitelist)

## How

![how](https://elixi.re/i/how.png)

- [Github: Creating files](https://help.github.com/en/github/managing-files-in-a-repository/creating-new-files)
- [Github: Uploading files](https://help.github.com/en/github/managing-files-in-a-repository/adding-a-file-to-a-repository)
- [Github: Editing files](https://help.github.com/en/github/managing-files-in-a-repository/editing-files-in-your-repository)
- [Github: Creating a Pull Request](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request)

## License

[![CC BY-SA 4.0](https://i.creativecommons.org/l/by-sa/4.0/88x31.png)](https://creativecommons.org/licenses/by-sa/4.0/)

This work is licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License](https://creativecommons.org/licenses/by-sa/4.0/).
