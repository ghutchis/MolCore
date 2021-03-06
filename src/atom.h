#ifndef MOLCORE_ATOM_H
#define MOLCORE_ATOM_H

#include "molcore.h"

#include <cstddef>

namespace MolCore {

class Molecule;

class MOLCORE_EXPORT Atom
{
public:
  // construction and destruction
  Atom();
  Atom(Molecule *molecule, size_t index);

  // properties
  bool isValid() const;
  Molecule* molecule() const;
  size_t index() const;
  void setAtomicNumber(unsigned char atomicNumber);
  unsigned char atomicNumber() const;

private:
  Molecule *m_molecule;
  size_t m_index;
};

} // end MolCore namespace

#endif // MOLCORE_ATOM_H
