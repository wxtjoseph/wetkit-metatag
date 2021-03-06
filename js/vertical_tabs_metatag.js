// Generated by CoffeeScript 1.6.3
/*
 @file
 Attaches the behaviors for the WetKit Metatags module.
*/

/*
 Update the summary for the metatag's vertical tabs.
*/

(function($) {
  return Drupal.behaviors.vertical_tabs_metatagsFieldsetSummaries = {
    attach: function(context) {
      $("fieldset#edit-vertical-tabs-wetkit", context).drupalSetSummary(function(context) {
        if ($("#edit-vertical-tabs-wetkit-enabled", context).attr("checked")) {
          return Drupal.checkPlain($("#edit-vertical-tabs-wetkit-custom-setting", context).val());
        } else {
          return Drupal.t("Using defaults");
        }
      });
      return $("fieldset#edit-vertical-tabs-metatags-advanced", context).drupalSetSummary(function(context) {
        if ($("#edit-vertical-tabs-metatags-advanced-enabled", context).attr("checked")) {
          return Drupal.checkPlain($("#edit-vertical-tabs-metatags-advanced-custom-setting", context).val());
        } else {
          return Drupal.t("Using defaults");
        }
      });
    }
  };
})(jQuery);
