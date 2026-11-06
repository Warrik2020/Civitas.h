#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Weapons
{
    class DesignThumb : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DesignThumb(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Weapons", "DesignThumb") {}
    public:
        void Draw(void* g, void* d, float w, float h) const { void* args[] = { g, d, &w, &h }; CallStatic("Draw", args, 4); }
        void* Make(void* parent, float w, float h) const { void* args[] = { parent, &w, &h }; return CallStatic("Make", args, 3); }
        void* MakeWell(void* parent, float wellWidth, float wellHeight, float w, float h, void* thumb) const { void* args[] = { parent, &wellWidth, &wellHeight, &w, &h, &thumb }; return CallStatic("MakeWell", args, 6); }
        int KeyOf(void* d) const { void* args[] = { d }; return CallStaticValue<int>("KeyOf", args, 1); }
    };
}
