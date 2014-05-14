; Open Atrium plupload Makefile

api = 2
core = 7.x

projects[plupload][version] = 1.6
projects[plupload][subdir] = contrib

projects[multiform][version] = 1.0
projects[multiform][subdir] = contrib

projects[media_multiselect][type] = module
projects[media_multiselect][subdir] = contrib
projects[media_multiselect][download][url] = http://git.drupal.org/sandbox/fangel/1652676.git
projects[media_multiselect][download][type] = git
projects[media_multiselect][download][branch] = 7.x-1.x
projects[media_multiselect][download][revision] = 7d445f

libraries[plupload][download][type] = get
libraries[plupload][download][url] = http://github.com/moxiecode/plupload/archive/v1.5.8.zip
libraries[plupload][directory_name] = plupload
libraries[plupload][destination] = libraries
