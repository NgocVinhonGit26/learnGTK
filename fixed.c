#include <gtk/gtk.h>

int main(int argc, char **argv)
{
    gtk_init(&argc, &argv);
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget *fixed = gtk_fixed_new();

    GtkWidget *button1 = gtk_button_new_with_label("button1");
    GtkWidget *button2 = gtk_button_new_with_label("button2");

    gtk_fixed_put(GTK_FIXED(fixed), button1, 0, 0);
    gtk_fixed_put(GTK_FIXED(fixed), button2, 100, 100);

    gtk_window_set_default_size(GTK_WINDOW(window), 500, 300);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    gtk_container_add(GTK_CONTAINER(window), fixed);
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}