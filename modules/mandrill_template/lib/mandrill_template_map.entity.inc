<?php
/**
 * @file
 * Mandrill Template entity class
 */

class MandrillTemplateMap extends Entity {
  public
    $mandrill_template_map_entity_id,
    $name,
    $label,
    $mailsystem_key,
    $template_id,
    $main_section,
    $sections;

  /**
   * Implements EntityInterface::entityType().
   */
  public function entityType() {
    return 'mandrill_template_map';
  }

  /**
   * Implements EntityInterface::label().
   */
  public function label() {
    return $this->label;
  }

  /**
   * Implements EntityInterface::id().
   */
  public function id() {
    return isset($this->mandrill_template_map_entity_id) ? $this->mandrill_template_map_entity_id : NULL;
  }

  /**
   * Implements EntityInterface::uri().
   */
  public function uri() {
    return array(
      'path' => 'admin/config/services/mandrill/templates/' . $this->id(),
      'options' => array(),
    );
  }

  /**
   * Specify URI.
   */
  protected function defaultUri() {
    return array('path' => 'admin/config/services/mandrill/templates/' . $this->id());
  }

}
