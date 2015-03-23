; Open Atrium plupload Makefile

api = 2
core = 7.x

projects[plupload][version] = 1.7
projects[plupload][subdir] = contrib
projects[plupload][patch][2386741] = https://www.drupal.org/files/issues/2386741-plupload-modal-2.patch

projects[multiform][version] = 1.1
projects[multiform][subdir] = contrib

libraries[plupload][download][type] = get
libraries[plupload][download][url] = http://github.com/moxiecode/plupload/archive/v1.5.8.zip
libraries[plupload][directory_name] = plupload
libraries[plupload][destination] = libraries
