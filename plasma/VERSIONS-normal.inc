LANG=en_GB.UTF-8
LANGUAGE=en
LC_ALL=en_GB.UTF-8

VERSION=5.16.90
SHORT_VERSION=5.17
OLD_VERSION=5.16.5
ORIGIN=stable  # git branch as set in projects.k.o, set to trunk or stable or lts
FTPSTABLE=unstable  # set to unstable or stable
OLD_FTPSTABLE=stable  # set to unstable or stable of previous release
BRANCH=master # set to master or Plasma/5.x
MINOR_RELEASE_MONTH="September 2019" # for announcement, when was 5.x.0 released

RELEASETYPE=beta # for changelog, set to beta, feature or bugfix

INFOCHECKOUT="/home/jr/src/www/www/info"                   # svn+ssh://svn@svn.kde.org/home/kde/trunk/www/sites/www/info/
ANNOUNCECHECKOUT="/home/jr/src/www/www/announcements"      # svn+ssh://svn@svn.kde.org/home/kde/trunk/www/sites/www/announcements/
L10NSCRIPTSCHECKOUT="/home/jr/src/www/l10n-kf5/scripts"   # svn+ssh://svn@svn.kde.org/home/kde/trunk/l10n-kde4/scripts/
WWWCHECKOUT="/home/jr/src/www/www"                         # svn+ssh://svn@svn.kde.org/home/kde/trunk/www/sites/www/
UPLOADSERVER="ftpadmin@master.kde.org"
#UPLOADSERVER="weegie"

RELEASEDATE="Thursday, 19 September 2019" # usually  `LC_ALL=C date "+%A, %d %B %Y" --date="next Tue"`
RELEASEMONTH="September" # usually `LC_ALL=C date "+%B" --date="next Tue"`
TIMESINCELASTRELEASE="six months'" # in sentence 'This release adds TIMESINCELASTRELEASE worth of new'

SCRATCH_SERVER=embra:tmp/ # somewhere to scp QA and tag files to

YOUTUBEID="xha6DJ_v1E4" # The video ID used in URL for youtube

# command from   git clone kde:jriddell/appstream-metainfo-release-update
APPSTREAM_UPDATER="/home/jr/src/appstream-metainfo-release-update/appstream-metainfo-release-update/appstream-metainfo-release-update"

GPG_KEY=0xEC94D18F7F05997E
RELEASE_DUDE="Jonathan Riddell"