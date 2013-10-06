<?php
/**
 * @file
 * wetkit_metatag.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function wetkit_metatag_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wetkit_metatag_creator';
  $strongarm->value = 'Web Experience Toolkit';
  $export['wetkit_metatag_creator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wetkit_metatag_optional_settings';
  $strongarm->value = array(
    'node' => array(
      'bundles' => array(
        'wetkit_page' => array(
          'metatags' => TRUE,
        ),
        'deploy_content_moderated' => array(
          'metatags' => TRUE,
        ),
        'deploy_content_simple' => array(
          'metatags' => TRUE,
        ),
        'wetkit_documentation' => array(
          'metatags' => TRUE,
        ),
      ),
    ),
    'taxonomy_term' => array(
      'bundles' => array(
        'wetkit_categories' => array(
          'metatags' => TRUE,
        ),
        'tags' => array(
          'metatags' => TRUE,
        ),
      ),
    ),
    'bean' => array(
      'bundles' => array(
        'wetkit_bean' => array(
          'metatags' => TRUE,
        ),
        'wetkit_highlight' => array(
          'metatags' => TRUE,
        ),
        'wetkit_search' => array(
          'metatags' => TRUE,
        ),
        'wetkit_rate' => array(
          'metatags' => TRUE,
        ),
        'wetkit_share' => array(
          'metatags' => TRUE,
        ),
        'wetkit_twitter' => array(
          'metatags' => TRUE,
        ),
      ),
    ),
    'i18n_translation' => array(
      'bundles' => array(
        'menu_link' => array(
          'metatags' => TRUE,
        ),
        'path' => array(
          'metatags' => TRUE,
        ),
        'taxonomy_term' => array(
          'metatags' => TRUE,
        ),
      ),
    ),
    'file' => array(
      'bundles' => array(
        'image' => array(
          'metatags' => FALSE,
        ),
        'video' => array(
          'metatags' => FALSE,
        ),
        'audio' => array(
          'metatags' => FALSE,
        ),
        'document' => array(
          'metatags' => FALSE,
        ),
        'wetkit_video' => array(
          'metatags' => FALSE,
        ),
      ),
    ),
    'taxonomy_vocabulary' => array(
      'bundles' => array(
        'taxonomy_vocabulary' => array(
          'metatags' => TRUE,
        ),
      ),
    ),
    'user' => array(
      'bundles' => array(
        'user' => array(
          'metatags' => TRUE,
        ),
      ),
    ),
    'wysiwyg_profile' => array(
      'bundles' => array(
        'wysiwyg_profile' => array(
          'metatags' => TRUE,
        ),
      ),
    ),
    'menu_link' => array(
      'bundles' => array(
        'devel' => array(
          'metatags' => TRUE,
        ),
        'menu-wet-footer' => array(
          'metatags' => TRUE,
        ),
        'menu-wet-header' => array(
          'metatags' => TRUE,
        ),
        'management' => array(
          'metatags' => TRUE,
        ),
        'main-menu' => array(
          'metatags' => TRUE,
        ),
        'megamenu-focus' => array(
          'metatags' => TRUE,
        ),
        'megamenu' => array(
          'metatags' => TRUE,
        ),
        'menu-wet-mid-footer' => array(
          'metatags' => TRUE,
        ),
        'navigation' => array(
          'metatags' => TRUE,
        ),
        'sidebar' => array(
          'metatags' => TRUE,
        ),
        'menu-wet-terms' => array(
          'metatags' => TRUE,
        ),
        'user-menu' => array(
          'metatags' => TRUE,
        ),
      ),
    ),
  );
  $export['wetkit_metatag_optional_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wetkit_metatag_subject_scheme';
  $strongarm->value = 'gccore';
  $export['wetkit_metatag_subject_scheme'] = $strongarm;

  return $export;
}
