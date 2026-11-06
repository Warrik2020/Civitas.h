#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class IdentityMixChart : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityMixChart(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "IdentityMixChart") {}
    public:
        bool TryGetEntry(int index, const char*& name, void* color, float& share, int& groupId) const { void* __callArgs[] = { &index, &name, &color, &share, &groupId }; return CallValue<bool>("TryGetEntry", __callArgs, 5); }
        void* Attach(void* parent, const char* header, void* collect, void* textColor, void* dimTextColor, void* buttonColor, void* selectedColor, bool showAxisToggle = true, bool showLegend = true) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(header ? header : "") : nullptr; void* __callArgs[] = { parent, managed_1, collect, textColor, dimTextColor, buttonColor, selectedColor, &showAxisToggle, &showLegend }; return CallStatic("Attach", __callArgs, 9); }
        void Invalidate() const { Call("Invalidate", nullptr, 0); }
        void CloseList() const { Call("CloseList", nullptr, 0); }
        void Refresh(bool force = false) const { void* __callArgs[] = { &force }; Call("Refresh", __callArgs, 1); }
        void* AxisName(int axis) const { void* __callArgs[] = { &axis }; return CallStatic("AxisName", __callArgs, 1); }
    };
}
