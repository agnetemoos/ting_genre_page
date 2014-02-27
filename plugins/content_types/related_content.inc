<?php

$plugin = array(
  'title' => t('Related content'),
  'description' => t('Show a number or nodes with relevant info'),
  'single' => TRUE,
  'content_types' => array('related_content'),
  'render callback' => 'related_content_content_type_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Ting'),
  'render last' => TRUE,
);

/**
 * Render the ting search results amount block.
 */
function related_content_content_type_render($subtype, $conf, $panel_args, $context) {
  // Since the context is required we can be sure it's always there.
  $node = $context->data;
  $block = new stdClass();
  $content = array();
  if ($node->type == 'genre_page') {
    // Get the ID of term this genre page is tagged with.
    $field_name = 'field_ting_genre_page_tags';
    $tid = _ting_genre_page_get_field_value($node, $field_name);
    // Only try to get the nodes if the genre page was tagged.
    if ($tid) {
      // Get the total count limit.
      $field_name = 'field_related_content_count';
      $total_count_limit = _ting_genre_page_get_field_value($node, $field_name);
      // Get the event count limit.
      $field_name = 'field_related_event_count';
      $event_count_limit = _ting_genre_page_get_field_value($node, $field_name);
      // Get the time limit for events
      $field_name = 'field_related_event_time_limit';
      $event_time_limit = _ting_genre_page_get_field_value($node, $field_name);
      // Convert from days -> seconds
      ting_genre_page_get_events_with_term($tid, $event_count_limit, 
        $event_time_limit);      
    }
  }
  $block->content = $content;
  return $block;
}


/**
 * Enable admin settings page
 */
function ting_genre_page_related_content_content_type_edit_form($form, &$form_state) {
  return $form;
}

