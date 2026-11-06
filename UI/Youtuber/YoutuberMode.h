#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Youtuber
{
    class YoutuberMode : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit YoutuberMode(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Youtuber", "YoutuberMode") {}
    public:
        float MapContrast(float own) const { void* args[] = { &own }; return CallStaticValue<float>("MapContrast", args, 1); }
        void Set(bool on) const { void* args[] = { &on }; CallStatic("Set", args, 1); }
        void SetCursorRing(bool on) const { void* args[] = { &on }; CallStatic("SetCursorRing", args, 1); }
    };
}
