#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesWatch : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesWatch(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesWatch") {}
    public:
        bool TryGet(int origin, void* s) const { void* __callArgs[] = { &origin, &s }; return CallStaticValue<bool>("TryGet", __callArgs, 2); }
        void Touch() const { CallStatic("Touch", nullptr, 0); }
        void* BandWord(int b) const { void* __callArgs[] = { &b }; return CallStatic("BandWord", __callArgs, 1); }
        void* BandHue(int b) const { void* __callArgs[] = { &b }; return CallStatic("BandHue", __callArgs, 1); }
        void* BandHex(int b) const { void* __callArgs[] = { &b }; return CallStatic("BandHex", __callArgs, 1); }
        void* Left(int ticks) const { void* __callArgs[] = { &ticks }; return CallStatic("Left", __callArgs, 1); }
        int SeatOf(int origin) const { void* __callArgs[] = { &origin }; return CallStaticValue<int>("SeatOf", __callArgs, 1); }
        void ShowLand(int origin) const { void* __callArgs[] = { &origin }; CallStatic("ShowLand", __callArgs, 1); }
        void Route(int origin) const { void* __callArgs[] = { &origin }; CallStatic("Route", __callArgs, 1); }
        bool TryAnswer(int origin, const char*& why) const { void* __callArgs[] = { &origin, &why }; return CallStaticValue<bool>("TryAnswer", __callArgs, 2); }
        void* AnswerLabel(int origin) const { void* __callArgs[] = { &origin }; return CallStatic("AnswerLabel", __callArgs, 1); }
    };
}
