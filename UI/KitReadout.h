#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class KitReadout : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KitReadout(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "KitReadout") {}
    public:
        void* MakeTag(void* parent, int pool, float iconSize, float fontSize, void* iconColor, void* textColor) const { void* __callArgs[] = { parent, &pool, &iconSize, &fontSize, iconColor, textColor }; return CallStatic("MakeTag", __callArgs, 6); }
        void* BarColor(void* p) const { void* __callArgs[] = { &p }; return CallStatic("BarColor", __callArgs, 1); }
        void* Status(void* f, void* cal, void* color) const { void* __callArgs[] = { f, cal, &color }; return CallStatic("Status", __callArgs, 3); }
        void* WaitPhrase(void* f, void* cal) const { void* __callArgs[] = { f, cal }; return CallStatic("WaitPhrase", __callArgs, 2); }
        void* PileTip(void* f, int pool, void* cal) const { void* __callArgs[] = { f, &pool, cal }; return CallStatic("PileTip", __callArgs, 3); }
        void* StatusTip(void* f, void* mcfg, void* cal) const { void* __callArgs[] = { f, mcfg, cal }; return CallStatic("StatusTip", __callArgs, 3); }
        void OpenProduction(int pool) const { void* __callArgs[] = { &pool }; CallStatic("OpenProduction", __callArgs, 1); }
        int FocusPile(void* f) const { void* __callArgs[] = { f }; return CallStaticValue<int>("FocusPile", __callArgs, 1); }
    };
}
