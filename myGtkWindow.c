#include <gtk/gtk.h>

int main(int argc, char **argv)
{

    char *title;
    int width, height;
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "heloooooooo");
    gtk_window_set_default_size(GTK_WINDOW(window), 1500, 1000);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_resizable(GTK_WINDOW(window), FALSE);
    gtk_window_set_decorated(GTK_WINDOW(window), TRUE);
    // gtk_window_maximize(GTK_WINDOW(window));

    title = gtk_window_get_title(GTK_WINDOW(window));
    printf("Your title: %s\n", title);

    gtk_window_get_size(GTK_WINDOW(window), &width, &height);
    printf("Width: %d\nHeight: %d\n", width, height);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}