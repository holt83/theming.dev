<?php

/**
 * Template for the user registration form.
 */

?>

<div id="registration-form">
  
  <div class="field">
    <!-- Prints the username field -->
    <?php print drupal_render($form['account']['name']); ?>
  </div>
  <div class="field">
    <!-- Prints the email field -->
    <?php print drupal_render($form['account']['mail']); ?>
  </div>
  <div class="field">
    <!-- Prints the submit button -->
    <?php print drupal_render($form['actions']['submit']); ?>
  </div>
  <?php print drupal_render_children($form); ?>
  
</div>


