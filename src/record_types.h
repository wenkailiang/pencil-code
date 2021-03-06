!  -*-f90-*-  (for emacs)    vim:set filetype=fortran:  (for vim)
!
! This file declares all the integer tags used to allow variable
! numbers and types of records in varfiles and other datafiles.

! Persistent
integer, parameter :: id_block_PERSISTENT        = 2000

! Random Seeds
integer, parameter :: id_record_RANDOM_SEEDS     = 1

! Interstellar
! deprecated:
integer, parameter :: id_record_ISM_T_NEXT_OLD   = 250
integer, parameter :: id_record_ISM_POS_NEXT_OLD = 251
! currently active:
integer, parameter :: id_record_ISM_BOLD_MASS    = 252
integer, parameter :: id_record_ISM_T_NEXT_SNI   = 253
integer, parameter :: id_record_ISM_T_NEXT_SNII  = 254
integer, parameter :: id_record_ISM_X_NEXT_SNII  = 255
integer, parameter :: id_record_ISM_Y_NEXT_SNII  = 256
integer, parameter :: id_record_ISM_TOGGLE_SNI   = 257
integer, parameter :: id_record_ISM_TOGGLE_SNII  = 258
integer, parameter :: id_record_ISM_SNRS         = 259
! deprecated:
integer, parameter :: id_record_ISM_TOGGLE_OLD   = 1001
integer, parameter :: id_record_ISM_SNRS_OLD     = 1002

! Forcing
integer, parameter :: id_record_FORCING_LOCATION = 270
integer, parameter :: id_record_FORCING_TSFORCE  = 271

! Hydro
integer, parameter :: id_record_HYDRO_TPHASE     = 280
integer, parameter :: id_record_HYDRO_PHASE1     = 281
integer, parameter :: id_record_HYDRO_PHASE2     = 282
integer, parameter :: id_record_HYDRO_TSFORCE    = 284
integer, parameter :: id_record_HYDRO_LOCATION   = 285

! Magnetic
integer, parameter :: id_record_MAGNETIC_PHASE   = 311
integer, parameter :: id_record_MAGNETIC_AMPL    = 312

! Shear
integer, parameter :: id_record_SHEAR_DELTA_Y    = 320

