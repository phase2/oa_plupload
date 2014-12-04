; Open Atrium plupload Makefile

api = 2
core = 7.x

projects[plupload][version] = 1.6
projects[plupload][subdir] = contrib
projects[plupload][patch][2386741] = https://www.drupal.org/files/issues/2386741-plupload-modal-2.patch
projects[plupload][patch][2063161] = https://www.drupal.org/files/issues/2063161-plupload-id-14.patch

projects[multiform][version] = 1.1
projects[multiform][subdir] = contrib

projects[media_multiselect][type] = module
projects[media_multiselect][subdir] = contrib
projects[media_multiselect][download][url] = http://git.drupal.org/sandbox/fangel/1652676.git
projects[media_multiselect][download][type] = git
projects[media_multiselect][download][branch] = 7.x-1.x
projects[media_multiselect][download][revision] = 7d445f
projects[media_multiselect][patch][2216273] = https://www.drupal.org/files/issues/media_multiselect-update_for_new_media-2216273-12.patch

libraries[plupload][download][type] = get
libraries[plupload][download][url] = http://github.com/moxiecode/plupload/archive/v1.5.8.zip
libraries[plupload][directory_name] = plupload
libraries[plupload][destination] = libraries
