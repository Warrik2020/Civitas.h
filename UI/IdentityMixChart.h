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
        bool TryGetEntry(int index, const char*& name, void* color, float& share, int& groupId) const { void* args[] = { &index, &name, &color, &share, &groupId }; return CallValue<bool>("TryGetEntry", args, 5); }
        void* Attach(void* parent, const char* header, void* collect, void* textColor, void* dimTextColor, void* buttonColor, void* selectedColor, bool showAxisToggle = true, bool showLegend = true) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(header ? header : "") : nullptr; void* args[] = { parent, managed_1, collect, textColor, dimTextColor, buttonColor, selectedColor, &showAxisToggle, &showLegend }; return CallStatic("Attach", args, 9); }
        void Invalidate() const { Call("Invalidate", nullptr, 0); }
        void CloseList() const { Call("CloseList", nullptr, 0); }
        void Refresh(bool force = false) const { void* args[] = { &force }; Call("Refresh", args, 1); }
        void* AxisName(int axis) const { void* args[] = { &axis }; return CallStatic("AxisName", args, 1); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
        int trait() const { return ReadField<int>("trait"); }
        void SetTrait(int value) const { WriteField<int>("trait", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
    };
}
