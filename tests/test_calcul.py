from calcul import add

def test_add() -> None:
    """Teste la fonction d'addition."""
    assert add(2, 2) == 4
    assert add(-1, 1) == 0
