<?php

/**
 * Default HTML for displaying related content on a ting genre page.
 *
 * Available variables:
 *  - $events
 *    An array of related events (node objects) for the genre page.
 *  - $news
 *    An arary of related news (node objects) for the genre page.
 *  - $rows
 *    A render array containing each row of node objects to be displayed as
 *    related content on the genre page.
 */

?>

<?php if ($rows): ?>
	<div id="ting-genre-page-related-content" class="group-blocks--wrapper">
		<?php foreach ($rows as $row): ?>
			<div class="group-blocks--inner group-blocks--four">
				<?php foreach($row['columns'] as $column_class => $column): ?>
					<div class="<?php print $column_class; ?>">
						<a href="<?php print $column['url']; ?>">
							<h2><?php print $column['title']; ?></h2>
						</a>
					</div>
				<?php endforeach; ?>
			</div>
		<?php endforeach; ?>
	</div>
<?php endif; ?>

