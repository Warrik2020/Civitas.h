#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceCarve : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceCarve(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceCarve") {}
    public:
        int existingId() const { return ReadField<int>("existingId"); }
        void SetExistingId(int value) const { WriteField<int>("existingId", value); }
        int originId() const { return ReadField<int>("originId"); }
        void SetOriginId(int value) const { WriteField<int>("originId", value); }
        int identityGroupId() const { return ReadField<int>("identityGroupId"); }
        void SetIdentityGroupId(int value) const { WriteField<int>("identityGroupId", value); }
        void* identityAxis() const { return ReadField<void*>("identityAxis"); }
        void SetIdentityAxis(void* value) const { WriteField<void*>("identityAxis", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        bool freed() const { return ReadField<bool>("freed"); }
        void SetFreed(bool value) const { WriteField<bool>("freed", value); }
        void* ideology() const { return ReadField<void*>("ideology"); }
        void SetIdeology(void* value) const { WriteField<void*>("ideology", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void SetFlag(void* value) const { WriteField<void*>("flag", value); }
        int guarantorId() const { return ReadField<int>("guarantorId"); }
        void SetGuarantorId(int value) const { WriteField<int>("guarantorId", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
    };
}
