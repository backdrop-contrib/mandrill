<?php
/**
 * @file
 * Class defining a MandrillActivityEntity.
 */

/**
 * Class MandrillActivityEntity
 *
 * Extend Entity to define a MandrillActivityEntity.
 */
class MandrillActivityEntity extends Entity {
  public
    $mandrill_activity_entity_id,
    $name,
    $label,
    $entity_type,
    $bundle,
    $email_property,
    $entity_path,
    $enabled;

  /**
   * Implements EntityInterface::entityType().
   */
  public function entityType() {
    return 'mandrill_activity_entity';
  }

  /**
   * Return a label for this entity.
   *
   * @return string
   *   Label.
   */
  public function label() {
    return $this->label;
  }

  /**
   * Implements EntityInterface::id().
   */
  public function id() {
    return isset($this->mandrill_activity_entity_id) ? $this->mandrill_activity_entity_id : NULL;
  }

  /**
   * Implements EntityInterface::uri().
   */
  public function uri() {
    return array(
      'path' => $this->entity_path . '/mandrill_activity',
      'options' => array(),
    );
  }

}
