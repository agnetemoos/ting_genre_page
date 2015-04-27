<?php
/**
 * @file
 * ting_genre_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ting_genre_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_genre';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Genre Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'genre_page' => 'genre_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f5040e19-b72b-46b6-bd1a-4c6cf96a8ef4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9d9b4aa6-dbdd-4620-b77c-a2c9fa9e8856';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9d9b4aa6-dbdd-4620-b77c-a2c9fa9e8856';
    $display->content['new-9d9b4aa6-dbdd-4620-b77c-a2c9fa9e8856'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-9d9b4aa6-dbdd-4620-b77c-a2c9fa9e8856';
    $pane = new stdClass();
    $pane->pid = 'new-4dd1c2b9-255d-44af-941e-843eacf12393';
    $pane->panel = 'main_content';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4dd1c2b9-255d-44af-941e-843eacf12393';
    $display->content['new-4dd1c2b9-255d-44af-941e-843eacf12393'] = $pane;
    $display->panels['main_content'][0] = 'new-4dd1c2b9-255d-44af-941e-843eacf12393';
    $pane = new stdClass();
    $pane->pid = 'new-53c46a6b-6ec9-4b89-88ab-a33b58be83f7';
    $pane->panel = 'main_content';
    $pane->type = 'new_materials_covers';
    $pane->subtype = 'new_materials_covers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53c46a6b-6ec9-4b89-88ab-a33b58be83f7';
    $display->content['new-53c46a6b-6ec9-4b89-88ab-a33b58be83f7'] = $pane;
    $display->panels['main_content'][1] = 'new-53c46a6b-6ec9-4b89-88ab-a33b58be83f7';
    $pane = new stdClass();
    $pane->pid = 'new-17f00f71-275a-4350-b39b-665bdaf10460';
    $pane->panel = 'main_content';
    $pane->type = 'inspiration_page_covers';
    $pane->subtype = 'inspiration_page_covers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '17f00f71-275a-4350-b39b-665bdaf10460';
    $display->content['new-17f00f71-275a-4350-b39b-665bdaf10460'] = $pane;
    $display->panels['main_content'][2] = 'new-17f00f71-275a-4350-b39b-665bdaf10460';
    $pane = new stdClass();
    $pane->pid = 'new-4fd6ac2e-33b6-478f-94b6-37fd3fb2593a';
    $pane->panel = 'main_content';
    $pane->type = 'related_content';
    $pane->subtype = 'related_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4fd6ac2e-33b6-478f-94b6-37fd3fb2593a';
    $display->content['new-4fd6ac2e-33b6-478f-94b6-37fd3fb2593a'] = $pane;
    $display->panels['main_content'][3] = 'new-4fd6ac2e-33b6-478f-94b6-37fd3fb2593a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_genre'] = $handler;

  return $export;
}
