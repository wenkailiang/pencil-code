!  -*-f90-*-  (for emacs)    vim:set filetype=fortran:  (for vim)
  private

  public :: initialize_particles_mpicomm, migrate_particles
  public :: output_blocks, input_blocks, load_balance_particles

  public :: nxb, nyb, nzb, nbx, nby, nbz, nbricks, nghostb, mxb, myb, mzb
  public :: l1b, l2b, m1b, m2b, n1b, n2b
  public :: nbrick_foster, nproc_parent, nproc_foster, nblock_loc
  public :: k1_iproc, k2_iproc, npar_iproc
  public :: xbrick, ybrick, zbrick, xb, yb, zb
  public :: k1_iblock, k2_iblock, npar_iblock
  public :: fb, dfb
  public :: ibrick_parent_par, iproc_parent_par
  public :: ibrick_parent_block, iproc_parent_block
  public :: iproc_foster_brick
  public :: iproc_parent_list,iproc_foster_list
