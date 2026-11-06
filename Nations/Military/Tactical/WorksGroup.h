#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class WorksGroup : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorksGroup(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "WorksGroup") {}
    public:
        int workId() const { return ReadField<int>("workId"); }
        void SetWorkId(int value) const { WriteField<int>("workId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        void* anchor() const { return ReadField<void*>("anchor"); }
        void SetAnchor(void* value) const { WriteField<void*>("anchor", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void SetFacing(void* value) const { WriteField<void*>("facing", value); }
        float halfLength() const { return ReadField<float>("halfLength"); }
        void SetHalfLength(float value) const { WriteField<float>("halfLength", value); }
        int fireStart() const { return ReadField<int>("fireStart"); }
        void SetFireStart(int value) const { WriteField<int>("fireStart", value); }
        int fireCount() const { return ReadField<int>("fireCount"); }
        void SetFireCount(int value) const { WriteField<int>("fireCount", value); }
        int supportStart() const { return ReadField<int>("supportStart"); }
        void SetSupportStart(int value) const { WriteField<int>("supportStart", value); }
        int supportCount() const { return ReadField<int>("supportCount"); }
        void SetSupportCount(int value) const { WriteField<int>("supportCount", value); }
        int discStart() const { return ReadField<int>("discStart"); }
        void SetDiscStart(int value) const { WriteField<int>("discStart", value); }
        int discCount() const { return ReadField<int>("discCount"); }
        void SetDiscCount(int value) const { WriteField<int>("discCount", value); }
        int ownerNationId() const { return ReadField<int>("ownerNationId"); }
        void SetOwnerNationId(int value) const { WriteField<int>("ownerNationId", value); }
        int holderDivisionId() const { return ReadField<int>("holderDivisionId"); }
        void SetHolderDivisionId(int value) const { WriteField<int>("holderDivisionId", value); }
    };
}
