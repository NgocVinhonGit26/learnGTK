#include <gtk/gtk.h>

int main(int argc, char **argv)
{
    gtk_init(&argc, &argv);
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);

    GtkWidget *button1 = gtk_button_new_with_label("button1");
    gtk_widget_set_size_request(GTK_WIDGET(button1), 500, 300);

    GtkWidget *button2 = gtk_button_new_with_label("button2");

    gtk_container_add(GTK_CONTAINER(window), box);
    gtk_box_pack_end(GTK_BOX(box), button1, TRUE, TRUE, 50);
    gtk_box_pack_start(GTK_BOX(box), button2, TRUE, TRUE, 50);

    int isHomo = gtk_box_get_homogeneous(GTK_BOX(box));
    printf("is Homo: %d\n", isHomo);

    gtk_box_set_homogeneous(GTK_BOX(box), TRUE);
    printf("is Homo: %d\n", gtk_box_get_homogeneous(GTK_BOX(box)));

    // gtk_container_remove(GTK_CONTAINER(window), button1);

    // gtk_container_add(GTK_CONTAINER(window), button2);

    // gtk_window_set_default_size(GTK_WINDOW(window), 1000, 800);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}