#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesAcceptList : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesAcceptList(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesAcceptList") {}
    public:
        void Focus(int axis, int groupId) const { void* args[] = { &axis, &groupId }; Call("Focus", args, 2); }
        void Refresh(void* c) const { void* args[] = { &c }; Call("Refresh", args, 1); }
        float MinWidth() const { return ReadStaticField<float>("MinWidth"); }
        void* Root() const { return ReadField<void*>("Root"); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* crown() const { return ReadField<void*>("crown"); }
        void SetCrown(void* value) const { WriteField<void*>("crown", value); }
        void* status() const { return ReadField<void*>("status"); }
        void SetStatus(void* value) const { WriteField<void*>("status", value); }
        bool hovered() const { return ReadField<bool>("hovered"); }
        void SetHovered(bool value) const { WriteField<bool>("hovered", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* swatch() const { return ReadField<void*>("swatch"); }
        void SetSwatch(void* value) const { WriteField<void*>("swatch", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* share() const { return ReadField<void*>("share"); }
        void SetShare(void* value) const { WriteField<void*>("share", value); }
        void* unrest() const { return ReadField<void*>("unrest"); }
        void SetUnrest(void* value) const { WriteField<void*>("unrest", value); }
        void* tend() const { return ReadField<void*>("tend"); }
        void SetTend(void* value) const { WriteField<void*>("tend", value); }
        void* accept() const { return ReadField<void*>("accept"); }
        void SetAccept(void* value) const { WriteField<void*>("accept", value); }
        void* kindred() const { return ReadField<void*>("kindred"); }
        void SetKindred(void* value) const { WriteField<void*>("kindred", value); }
        void* persecute() const { return ReadField<void*>("persecute"); }
        void SetPersecute(void* value) const { WriteField<void*>("persecute", value); }
        void* tendLabel() const { return ReadField<void*>("tendLabel"); }
        void SetTendLabel(void* value) const { WriteField<void*>("tendLabel", value); }
        void* acceptLabel() const { return ReadField<void*>("acceptLabel"); }
        void SetAcceptLabel(void* value) const { WriteField<void*>("acceptLabel", value); }
        void* kindredLabel() const { return ReadField<void*>("kindredLabel"); }
        void SetKindredLabel(void* value) const { WriteField<void*>("kindredLabel", value); }
        void* persecuteLabel() const { return ReadField<void*>("persecuteLabel"); }
        void SetPersecuteLabel(void* value) const { WriteField<void*>("persecuteLabel", value); }
        void* info() const { return ReadField<void*>("info"); }
        void SetInfo(void* value) const { WriteField<void*>("info", value); }
        bool has() const { return ReadField<bool>("has"); }
        void SetHas(bool value) const { WriteField<bool>("has", value); }
    };
}
