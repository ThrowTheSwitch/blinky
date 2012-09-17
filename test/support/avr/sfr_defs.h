#ifndef _AVR_SFR_DEFS_H_
#define _AVR_SFR_DEFS_H_

/** \name Bit manipulation */

/*@{*/
/** \def _BV
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Converts a bit number into a byte value.

    \note The bit shift is performed by the compiler which then inserts the
    result into the code. Thus, there is no run-time overhead when using
    _BV(). */
    
#define _BV(bit) (1 << (bit))

/*@}*/

#endif  /* _SFR_DEFS_H_ */
