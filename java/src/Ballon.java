package java.src;

public classes Ballon {
    private String nom;
    private double taille;

    // Constructeur
    public Ballon(String nom, double taille) {
        this.nom = nom;
        this.taille = taille;
    }

    // Getter pour nom
    public String getNom() {
        return nom;
    }

    // Setter pour nom
    public void setNom(String nom) {
        this.nom = nom;
    }

    // Getter pour taille
    public double getTaille() {
        return taille;
    }

    // Setter pour taille
    public void setTaille(double taille) {
        this.taille = taille;
    }

    // Méthode pour afficher les informations
    public void afficher() {
        System.out.println("Nom : " + nom);
        System.out.println("Taille : " + taille);
    }
}
