DECLR(CARDINFO_ARCHETYPE_TEXT_COLOR, CLR(255, 0, 0, 255))
DECLR(CARDINFO_PASSCODE_SCOPE_TEXT_COLOR, CLR(255, 0, 0, 255))
DECLR(CARDINFO_IMAGE_BACKGROUND, CLR(192, 192, 192, 192))
DECLR(CARDINFO_STATS_COLOR, CLR(255, 0, 0, 255))
DECLR(CARDINFO_TYPES_COLOR, CLR(255, 0, 0, 255))

#define WINDOWRECT(what, bl, br, tl, tr, out) \
DECLR(DECK_WINDOW_##what##_BOTTOM_LEFT, bl) \
DECLR(DECK_WINDOW_##what##_BOTTOM_RIGHT, br) \
DECLR(DECK_WINDOW_##what##_TOP_LEFT, tl) \
DECLR(DECK_WINDOW_##what##_TOP_RIGHT, tr) \
DECLR(DECK_WINDOW_##what##_OUTLINE, out)

WINDOWRECT(EXTRA_INFO, 0x40000000, 0x40000000, 0x400000ff, 0x400000ff, 0xffffffff)
WINDOWRECT(EXTRA, 0x40000000, 0x40000000, 0x400000ff, 0x400000ff, 0xffffffff)

WINDOWRECT(MAIN_INFO, 0x40000000, 0x40000000, 0x400000ff, 0x400000ff, 0xffffffff)
WINDOWRECT(MAIN, 0x40000000, 0x40000000, 0x400000ff, 0x400000ff, 0xffffffff)

WINDOWRECT(SIDE_INFO, 0x40000000, 0x40000000, 0x400000ff, 0x400000ff, 0xffffffff)
WINDOWRECT(SIDE, 0x40000000, 0x40000000, 0x400000ff, 0x400000ff, 0xffffffff)

WINDOWRECT(SEARCH_RESULT_INFO, 0x40000000, 0x40000000, 0x400000ff, 0x400000ff, 0xffffffff)
WINDOWRECT(SEARCH_RESULT, 0x40000000, 0x40000000, 0x400000ff, 0x400000ff, 0xffffffff)

#undef WINDOWRECT

DECLR(DECK_WINDOW_HOVERED_CARD_RESULT, 0x80000000)

DECLR(DECK_WINDOW_HOVERED_CARD_OUTLINE, 0xffffffff)

DECLR(DUELFIELD_ANNOUNCE_TEXT_BACKGROUND_COLOR, CLR(192, 192, 192, 192))
DECLR(DUELFIELD_ANNOUNCE_TEXT_COLOR, 0)
DECLR(DUELFIELD_CARD_OPPONENT_WINDOW_BACKGROUND, 0xffffffff)
DECLR(DUELFIELD_CARD_SELECTED_WINDOW_BACKGROUND, 0xffffff00)
DECLR(DUELFIELD_CARD_SELECT_WINDOW_OVERLAY_TEXT, 0xff0000ff)
DECLR(DUELFIELD_CARD_SELECT_WINDOW_SET_TEXT, 0xff0000ff)
DECLR(DUELFIELD_CARD_SELF_WINDOW_BACKGROUND, 0xffd0d0d0)
DECLR(DUELFIELD_HIGHLIGHTING_CARD_OUTLINE, CLR(255, 0, 255, 255))
DECLR(DUELFIELD_HOVERED, CLR(255, 255, 255, 255))
DECLR(DUELFIELD_LINKED, CLR(255, 2, 97, 162))
DECLR(DUELFIELD_MUTUAL_LINKED, CLR(255, 0, 153, 0))
DECLR(DUELFIELD_SELECTABLE_CARD_OUTLINE, CLR(255, 255, 255, 0))
DECLR(DUELFIELD_SELECTABLE_FIELD_OUTLINE, CLR(255, 255, 255, 255))
DECLR(DUELFIELD_DISABLED_FIELD_COLOR, CLR(255, 255, 255, 255))
DECLR(DUELFIELD_TOOLTIP_TEXT_BACKGROUND_COLOR, CLR(192, 255, 255, 255))
DECLR(DUELFIELD_TOOLTIP_TEXT_COLOR, 0)
DECLR(DUELFIELD_TURNPLAYER_COLOR, 0xa0000000)
DECLR(DUELFIELD_TURNPLAYER_OUTLINE_COLOR, 0xffff8080)
DECLR(DUELFIELD_CHAIN_COLOR, 0xffffff00)

DECLR(DUELFIELD_UNCHANGED_CARD_ATK, 0xffffffff)
DECLR(DUELFIELD_HIGHER_CARD_ATK, 0xffffff00)
DECLR(DUELFIELD_LOWER_CARD_ATK, 0xffff2090)
DECLR(DUELFIELD_UNCHANGED_CARD_DEF, 0xffffffff)
DECLR(DUELFIELD_HIGHER_CARD_DEF, 0xffffff00)
DECLR(DUELFIELD_LOWER_CARD_DEF, 0xffff2090)
DECLR(DUELFIELD_CARD_LEVEL, 0xffffffff)
DECLR(DUELFIELD_CARD_TUNER_LEVEL, 0xffffff00)
DECLR(DUELFIELD_CARD_RANK, 0xffff80ff)
DECLR(DUELFIELD_CARD_LINK, 0xffffffff)
DECLR(DUELFIELD_CARD_PSCALE, 0xffffffff)
DECLR(DUELFIELD_STACK, 0xffffff00)
DECLR(DUELFIELD_TURN_COUNT, 0x8000ffff)
DECLR(DUELFIELD_LP_1, 0xffffff00)
DECLR(DUELFIELD_LP_2, 0xffffff00)

DECLR(DUELFIELD_ATTACK_ARROW, 0xc000ff00)

DECLR(FPS_TEXT_COLOR, CLR(255, 255, 255, 255))

DECLR(LPBAR_1_BOTTOM_LEFT, 0xff1d82d1)
DECLR(LPBAR_1_BOTTOM_RIGHT, 0xff1d82d1)
DECLR(LPBAR_1_TOP_LEFT, 0xff1599de)
DECLR(LPBAR_1_TOP_RIGHT, 0xff1599de)
DECLR(LPBAR_2_BOTTOM_LEFT, 0xff1d82d1)
DECLR(LPBAR_2_BOTTOM_RIGHT, 0xff1d82d1)
DECLR(LPBAR_2_TOP_LEFT, 0xff1599de)
DECLR(LPBAR_2_TOP_RIGHT, 0xff1599de)
DECLR(TIMEBAR_1_BOTTOM_LEFT, 0xa0c0c0c0)
DECLR(TIMEBAR_1_BOTTOM_RIGHT, 0xa0c0c0c0)
DECLR(TIMEBAR_1_TOP_LEFT, 0xa0e0e0e0)
DECLR(TIMEBAR_1_TOP_RIGHT, 0xa0e0e0e0)
DECLR(TIMEBAR_1_OUTLINE, 0xffffffff)
DECLR(TIMEBAR_2_BOTTOM_LEFT, 0xa0c0c0c0)
DECLR(TIMEBAR_2_BOTTOM_RIGHT, 0xa0c0c0c0)
DECLR(TIMEBAR_2_TOP_LEFT, 0xa0e0e0e0)
DECLR(TIMEBAR_2_TOP_RIGHT, 0xa0e0e0e0)
DECLR(TIMEBAR_2_OUTLINE, 0xffffffff)

DECLR(PROGRESSBAR_EMPTY_COLOR, CLR(255, 0, 0, 0))
DECLR(PROGRESSBAR_FILL_COLOR, CLR(255, 255, 255, 255))

DECLR(ROOMLIST_CUSTOM_ROOM, CLR(150, 250, 50, 50))
DECLR(ROOMLIST_NORMAL_ROOM, CLR(0, 255, 255, 255))
DECLR(ROOMLIST_STARTED_ROOM, CLR(100, 211, 211, 211))
DECLR(ROOMLIST_TEXTS_COLOR, CLR(255, 255, 255, 255))