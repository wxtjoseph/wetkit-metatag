; WetKit Metatag Makefile

api = 2
core = 7.x

; Modules for WetKit Metatag

projects[metatag][version] = 1.x-dev
projects[metatag][subdir] = contrib
projects[metatag][type] = module
projects[metatag][download][type] = git
projects[metatag][download][revision] = 8a05eec
projects[metatag][download][branch] = 7.x-1.x
projects[metatag][patch][1572474] = http://drupal.org/files/issues/metatag-n1572474-78.patch
