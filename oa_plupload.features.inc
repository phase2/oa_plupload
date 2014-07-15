<?php
/**
 * @file
 * oa_plupload.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oa_plupload_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function oa_plupload_field_default_field_instances_alter(&$data) {
  if (isset($data['node-oa_discussion_post-field_oa_media'])) {
    $data['node-oa_discussion_post-field_oa_media']['widget']['module'] = 'media_multiselect'; /* WAS: 'media' */
    $data['node-oa_discussion_post-field_oa_media']['widget']['type'] = 'media_multiselect'; /* WAS: 'media_generic' */
  }
  if (isset($data['node-oa_event-field_oa_media'])) {
    $data['node-oa_event-field_oa_media']['widget']['module'] = 'media_multiselect'; /* WAS: 'media' */
    $data['node-oa_event-field_oa_media']['widget']['type'] = 'media_multiselect'; /* WAS: 'media_generic' */
  }
  if (isset($data['node-oa_wiki_page-field_oa_media'])) {
    $data['node-oa_wiki_page-field_oa_media']['widget']['module'] = 'media_multiselect'; /* WAS: 'media' */
    $data['node-oa_wiki_page-field_oa_media']['widget']['type'] = 'media_multiselect'; /* WAS: 'media_generic' */
  }
  if (isset($data['node-oa_worktracker_task-field_oa_media'])) {
    $data['node-oa_worktracker_task-field_oa_media']['widget']['module'] = 'media_multiselect'; /* WAS: 'media' */
    $data['node-oa_worktracker_task-field_oa_media']['widget']['type'] = 'media_multiselect'; /* WAS: 'media_generic' */
  }
}
