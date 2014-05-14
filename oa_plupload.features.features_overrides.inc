<?php
/**
 * @file
 * oa_plupload.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function oa_plupload_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-oa_discussion_post-field_oa_media.widget|module"] = 'media_multiselect';
  $overrides["field_instance.node-oa_discussion_post-field_oa_media.widget|type"] = 'media_multiselect';
  $overrides["field_instance.node-oa_event-field_oa_media.widget|module"] = 'media_multiselect';
  $overrides["field_instance.node-oa_event-field_oa_media.widget|type"] = 'media_multiselect';
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|module"] = 'media_multiselect';
  $overrides["field_instance.node-oa_wiki_page-field_oa_media.widget|type"] = 'media_multiselect';

 return $overrides;
}
