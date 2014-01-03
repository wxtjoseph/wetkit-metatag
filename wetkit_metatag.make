; WetKit Metatag Makefile

api = 2
core = 7.x

; Modules for WetKit Metatag

projects[metatag][version] = 1.x-dev
projects[metatag][subdir] = contrib
projects[metatag][type] = module
projects[metatag][download][type] = git
projects[metatag][download][revision] = 8e103c4
projects[metatag][download][branch] = 7.x-1.x
projects[metatag][patch][2166769] = http://drupal.org/files/issues/metatags_deploy_support-2166769-04.patch
