#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityFamily : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityFamily(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityFamily") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int parentId() const { return ReadField<int>("parentId"); }
        void SetParentId(int value) const { WriteField<int>("parentId", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        int depth() const { return ReadField<int>("depth"); }
        void SetDepth(int value) const { WriteField<int>("depth", value); }
        bool grand() const { return ReadField<bool>("grand"); }
        void SetGrand(bool value) const { WriteField<bool>("grand", value); }
    };
}
