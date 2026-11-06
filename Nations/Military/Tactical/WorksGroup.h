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
        void workId(int value) const { WriteField<int>("workId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        void* anchor() const { return ReadField<void*>("anchor"); }
        void anchor(void* value) const { WriteField<void*>("anchor", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void facing(void* value) const { WriteField<void*>("facing", value); }
        float halfLength() const { return ReadField<float>("halfLength"); }
        void halfLength(float value) const { WriteField<float>("halfLength", value); }
        int fireStart() const { return ReadField<int>("fireStart"); }
        void fireStart(int value) const { WriteField<int>("fireStart", value); }
        int fireCount() const { return ReadField<int>("fireCount"); }
        void fireCount(int value) const { WriteField<int>("fireCount", value); }
        int supportStart() const { return ReadField<int>("supportStart"); }
        void supportStart(int value) const { WriteField<int>("supportStart", value); }
        int supportCount() const { return ReadField<int>("supportCount"); }
        void supportCount(int value) const { WriteField<int>("supportCount", value); }
        int discStart() const { return ReadField<int>("discStart"); }
        void discStart(int value) const { WriteField<int>("discStart", value); }
        int discCount() const { return ReadField<int>("discCount"); }
        void discCount(int value) const { WriteField<int>("discCount", value); }
        int ownerNationId() const { return ReadField<int>("ownerNationId"); }
        void ownerNationId(int value) const { WriteField<int>("ownerNationId", value); }
        int holderDivisionId() const { return ReadField<int>("holderDivisionId"); }
        void holderDivisionId(int value) const { WriteField<int>("holderDivisionId", value); }
    };
}
