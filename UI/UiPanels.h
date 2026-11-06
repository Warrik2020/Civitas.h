#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiPanels : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiPanels(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiPanels") {}
    public:
        void* MakeCrest(void* header, float height = 44.0f) const { void* __callArgs[] = { header, &height }; return CallStatic("MakeCrest", __callArgs, 2); }
        void SetCrest(void* flag, void* sprite) const { void* __callArgs[] = { flag, sprite }; CallStatic("SetCrest", __callArgs, 2); }
        void* MakeHeaderBadge(void* header) const { void* __callArgs[] = { header }; return CallStatic("MakeHeaderBadge", __callArgs, 1); }
        void SetBadge(void* badge, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { badge, managed_1 }; CallStatic("SetBadge", __callArgs, 2); }
        void* MakeHeadline(void* parent, void* glyph, const char* caption) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { parent, glyph, managed_2 }; return CallStatic("MakeHeadline", __callArgs, 3); }
        void* MakeStatTiles(void** args = nullptr, int count = 0) const { return CallStatic("MakeStatTiles", args, count); }
        void* MakeBand(void* windowRoot) const { void* __callArgs[] = { windowRoot }; return CallStatic("MakeBand", __callArgs, 1); }
        void* SignedMonthly(float perTick) const { void* __callArgs[] = { &perTick }; return CallStatic("SignedMonthly", __callArgs, 1); }
        float CrestHeight() const { return ReadStaticField<float>("CrestHeight"); }
    };
}
