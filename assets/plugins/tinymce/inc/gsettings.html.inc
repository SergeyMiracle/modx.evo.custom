<style type="text/css">
textarea.mce {width:95%;height:53px;display:block;}
#editorRow_TinyMCE {width:99%;}
#editorRow_TinyMCE #editorRow_TinyMCE th {width:220px;margin-left:25px;}
#editorRow_TinyMCE td,#editorRow_TinyMCE th {border-bottom:1px dotted #ccc; padding: 10px;}

</style>
<table id="editorRow_TinyMCE" class="settings editorRow">
  <tr class="row1" style="display: table-row;">
    <td colspan="2" class="warning" style="color:#707070; background-color:#eeeeee"><h4>[+tinymce_settings+]</h4></td>
  </tr>
  <tr class="row1" style="display: table-row;">
    <td nowrap class="warning"><b>[+tinymce_editor_theme_title+]</b></td>
    <td>
    <select name="tinymce_editor_theme">
    [+theme_options+]
  </select>
  </td>
  </tr>
  <tr class="row1" style="display: table-row;">
    <td width="200">&nbsp;</td>
    <td class="comment">[+tinymce_editor_theme_message+]</td>
  </tr>
  <tr class="row1" style="display: table-row;">
    <td colspan="2"><div class="split"></div></td>
  </tr>
  <tr class="row1" style="display: table-row;">
  <td nowrap class="warning"><b>[+tinymce_editor_custom_plugins_title+]</b></td>
  <td><textarea onchange="documentDirty=true;" type="text" class="inputBox mce" maxlength="6500" name="tinymce_custom_plugins" />[+custom_plugins+]</textarea>
  </td>
  </tr>
  <tr class="row1" style="display: table-row;">
  <td width="200">&nbsp;</td>
  <td class="comment">[+tinymce_editor_custom_plugins_message+]</td>
  </tr>
  <tr class="row1" style="display: table-row;">
    <td colspan="2"><div class="split"></div></td>
  </tr>
  <tr class="row1" style="display: table-row;">
  <td nowrap class="warning" valign="top"><b>[+tinymce_editor_custom_buttons_title+]</b></td>
  <td>
  Row 1: <textarea onchange="documentDirty=true;" class="inputBox mce" maxlength="6500" name="tinymce_custom_buttons1" />[+custom_buttons1+]</textarea>
  Row 2: <textarea onchange="documentDirty=true;" class="inputBox mce" maxlength="6500" name="tinymce_custom_buttons2" />[+custom_buttons2+]</textarea>
  Row 3: <textarea onchange="documentDirty=true;" class="inputBox mce" maxlength="6500" name="tinymce_custom_buttons3" />[+custom_buttons3+]</textarea>
  Row 4: <textarea onchange="documentDirty=true;" class="inputBox mce" maxlength="6500" name="tinymce_custom_buttons4" />[+custom_buttons4+]</textarea>
  </td>
  </tr>
  <tr class="row1" style="display: table-row;">
  <td width="200">&nbsp;</td>
  <td class="comment">[+tinymce_editor_custom_buttons_message+]</td>
  </tr>
  <tr class="row1" style="display: table-row;">
    <td colspan="2"><div class="split"></div></td>
  </tr>
  <tr class="row1" style="display: table-row;">
  <td nowrap class="warning"><b>[+tinymce_editor_css_selectors_title+]</b></td>
  <td><input onchange="documentDirty=true;" type="text" class="inputBox" maxlength="6500" style="width: 300px;" name="tinymce_css_selectors" value="[+css_selectors+]" />
  </td>
  </tr>
  <tr class="row1" style="display: table-row;">
  <td width="200">&nbsp;</td>
  <td class="comment">[+tinymce_editor_css_selectors_message+]</td>
  </tr>
</table>
