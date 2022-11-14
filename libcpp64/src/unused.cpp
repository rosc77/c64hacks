
/*

__attribute__((interrupt_norecurse, no_isr))
void updateSid(void) {

    asm volatile (
        "cld\n\t"
        "pha\n\t"
        "txa\n\t"
        "pha\n\t"
        "tya\n\t"
        "pha\n\t"
        "lda mos8(__rc2)\n\t"
        "pha\n\t"
        "lda mos8(__rc3)\n\t"
        "pha\n\t"
        "lda mos8(__rc4)\n\t"
        "pha\n\t"
        "lda mos8(__rc5)\n\t"
        "pha\n\t"
        "lda mos8(__rc6)\n\t"
        "pha\n\t"
        "lda mos8(__rc7)\n\t"
        "pha\n\t"
        "lda mos8(__rc8)\n\t"
        "pha\n\t"
        "lda mos8(__rc9)\n\t"
        "pha\n\t"
        "lda mos8(__rc10)\n\t"
        "pha\n\t"
        "lda mos8(__rc11)\n\t"
        "pha\n\t"
        "lda mos8(__rc12)\n\t"
        "pha\n\t"
        "lda mos8(__rc13)\n\t"
        "pha\n\t"
        "lda mos8(__rc14)\n\t"
        "pha\n\t"
        "lda mos8(__rc15)\n\t"
        "pha\n\t"
        "lda mos8(__rc16)\n\t"
        "pha\n\t"
        "lda mos8(__rc17)\n\t"
        "pha\n\t"
        "lda mos8(__rc18)\n\t"
        "pha\n\t"
        "lda mos8(__rc19)\n\t"
        "pha\n\t"
        "lda mos8(__rc20)\n\t"
        "pha\n\t"
        "lda mos8(__rc21)\n\t"
        "pha\n\t"
        "lda mos8(__rc22)\n\t"
        "pha\n\t"
        "lda mos8(__rc23)\n\t"
        "pha\n\t"
        "lda mos8(__rc24)\n\t"
        "pha\n\t"
        "lda mos8(__rc25)\n\t"
        "pha\n\t"
        "lda mos8(__rc26)\n\t"
        "pha\n\t"
        "lda mos8(__rc27)\n\t"
        "pha\n\t"
        "lda mos8(__rc28)\n\t"
        "pha\n\t"
        "lda mos8(__rc29)\n\t"
        "pha\n\t"
    );

    asm volatile (
        "JSR %0" ::"n"(sid_info.play_address)
    );

    asm volatile(
        "pla\n\t"
        "sta mos8(__rc29)\n\t"
        "pla\n\t"
        "sta mos8(__rc28)\n\t"
        "pla\n\t"
        "sta mos8(__rc27)\n\t"
        "pla\n\t"
        "sta mos8(__rc26)\n\t"
        "pla\n\t"
        "sta mos8(__rc25)\n\t"
        "pla\n\t"
        "sta mos8(__rc24)\n\t"
        "pla\n\t"
        "sta mos8(__rc23)\n\t"
        "pla\n\t"
        "sta mos8(__rc22)\n\t"
        "pla\n\t"
        "sta mos8(__rc21)\n\t"
        "pla\n\t"
        "sta mos8(__rc20)\n\t"
        "pla\n\t"
        "sta mos8(__rc19)\n\t"
        "pla\n\t"
        "sta mos8(__rc18)\n\t"
        "pla\n\t"
        "sta mos8(__rc17)\n\t"
        "pla\n\t"
        "sta mos8(__rc16)\n\t"
        "pla\n\t"
        "sta mos8(__rc15)\n\t"
        "pla\n\t"
        "sta mos8(__rc14)\n\t"
        "pla\n\t"
        "sta mos8(__rc13)\n\t"
        "pla\n\t"
        "sta mos8(__rc12)\n\t"
        "pla\n\t"
        "sta mos8(__rc11)\n\t"
        "pla\n\t"
        "sta mos8(__rc10)\n\t"
        "pla\n\t"
        "sta mos8(__rc9)\n\t"
        "pla\n\t"
        "sta mos8(__rc8)\n\t"
        "pla\n\t"
        "sta mos8(__rc7)\n\t"
        "pla\n\t"
        "sta mos8(__rc6)\n\t"
        "pla\n\t"
        "sta mos8(__rc5)\n\t"
        "pla\n\t"
        "sta mos8(__rc4)\n\t"
        "pla\n\t"
        "sta mos8(__rc3)\n\t"
        "pla\n\t"
        "sta mos8(__rc2)\n\t"
        "pla\n\t"
        "tay\n\t"
        "pla\n\t"
        "tax\n\t"
        "pla\n\t"
        "rti"
    );
}

*/