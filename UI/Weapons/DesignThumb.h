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
        void Draw(void* g, void* d, float w, float h) const { void* __callArgs[] = { g, d, &w, &h }; CallStatic("Draw", __callArgs, 4); }
        void* Make(void* parent, float w, float h) const { void* __callArgs[] = { parent, &w, &h }; return CallStatic("Make", __callArgs, 3); }
        void* MakeWell(void* parent, float wellWidth, float wellHeight, float w, float h, void* thumb) const { void* __callArgs[] = { parent, &wellWidth, &wellHeight, &w, &h, &thumb }; return CallStatic("MakeWell", __callArgs, 6); }
        int KeyOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("KeyOf", __callArgs, 1); }
    };
}
