<?php

/**
 * @file
 * A conversion of the default theme function for breadcrumb (from includes/them.inc)
 * into a template file. This approach makes it easier for designers to define
 * the structure of themeable elements.
 */

?>

<div>
  <span class="breadcrumb-title">
    <?php print t('You are here:'); ?> 
  </span>
  <span class="breadcrumb">
    <?php print implode(' > ', $breadcrumb); ?>
  </span>
</div>
