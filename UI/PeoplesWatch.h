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
        bool TryGet(int origin, void* s) const { void* args[] = { &origin, &s }; return CallStaticValue<bool>("TryGet", args, 2); }
        void Touch() const { CallStatic("Touch", nullptr, 0); }
        void* BandWord(int b) const { void* args[] = { &b }; return CallStatic("BandWord", args, 1); }
        void* BandHue(int b) const { void* args[] = { &b }; return CallStatic("BandHue", args, 1); }
        void* BandHex(int b) const { void* args[] = { &b }; return CallStatic("BandHex", args, 1); }
        void* Left(int ticks) const { void* args[] = { &ticks }; return CallStatic("Left", args, 1); }
        int SeatOf(int origin) const { void* args[] = { &origin }; return CallStaticValue<int>("SeatOf", args, 1); }
        void ShowLand(int origin) const { void* args[] = { &origin }; CallStatic("ShowLand", args, 1); }
        void Route(int origin) const { void* args[] = { &origin }; CallStatic("Route", args, 1); }
        bool TryAnswer(int origin, const char*& why) const { void* args[] = { &origin, &why }; return CallStaticValue<bool>("TryAnswer", args, 2); }
        void* AnswerLabel(int origin) const { void* args[] = { &origin }; return CallStatic("AnswerLabel", args, 1); }
    };
}
