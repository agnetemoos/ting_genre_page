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
      $tids = array($tid);
      // Get the event count limit.
      $field_name = 'field_related_event_count';
      $count_limit = _ting_genre_page_get_field_value($node, $field_name);
      // Get the event time limit.
      $field_name = 'field_related_event_time_limit';
      $time_limit = _ting_genre_page_get_field_value($node, $field_name);
      $nids = ting_genre_page_get_events_with_terms($tid, $count_limit, $time_limit);
      // Get the total count
      $field_name = 'field_related_content_count';
      $count_limit = _ting_genre_page_get_field_value($node, $field_name);
      // Substract the events found above from the total count, and fill the
      // remaining space with nodes of type 'ding_news'.
      $count_limit -= count($nids);
      if ($count_limit > 0) {

      }
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

