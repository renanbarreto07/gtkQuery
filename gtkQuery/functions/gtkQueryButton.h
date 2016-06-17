#define BUTTON_STD() {send}

gtkQueryButton button (char *button_name) {

	gtkQueryButton button = BUTTON_STD();

	gtk.button = (GtkButton*)gtk_builder_get_object(gtk.builder, button_name);

	 return button;
}

void send (gtkQuery gtk) {

	g_signal_connect(gtk.button, "clicked",
			G_CALLBACK(gtk.function), NULL);
}

