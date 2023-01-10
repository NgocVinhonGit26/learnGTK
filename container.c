#include <gtk/gtk.h>

int main(int argc, char **argv)
{
    gtk_init(&argc, &argv);
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkWidget *button1 = gtk_button_new_with_label("button1");
    GtkWidget *button2 = gtk_button_new_with_label("button2");

    gtk_container_add(GTK_CONTAINER(window), button1);
    gtk_container_remove(GTK_CONTAINER(window), button1);

    gtk_container_add(GTK_CONTAINER(window), button2);

    gtk_window_set_default_size(GTK_WINDOW(window), 1000, 800);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}