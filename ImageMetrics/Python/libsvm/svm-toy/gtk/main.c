/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#include <gtk/gtk.h>
#include "interface.h"
void svm_toy_initialize();

int main (int argc, char *argv[])
{
  GtkWidget *window;

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  window = create_window ();
  gtk_widget_show (window);

  svm_toy_initialize();
  gtk_main ();
  return 0;
}
