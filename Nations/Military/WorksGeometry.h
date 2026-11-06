#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class WorksGeometry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorksGeometry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "WorksGeometry") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        int FireLine(int& start, int& count) const { void* __callArgs[] = { &start, &count }; return CallValue<int>("FireLine", __callArgs, 2); }
        int LineOf(int kind, int& start, int& count) const { void* __callArgs[] = { &kind, &start, &count }; return CallValue<int>("LineOf", __callArgs, 3); }
        void* points() const { return ReadField<void*>("points"); }
        void* lines() const { return ReadField<void*>("lines"); }
        void* discs() const { return ReadField<void*>("discs"); }
        int workId() const { return ReadField<int>("workId"); }
        void workId(int value) const { WriteField<int>("workId", value); }
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        void* anchor() const { return ReadField<void*>("anchor"); }
        void anchor(void* value) const { WriteField<void*>("anchor", value); }
        void* facing() const { return ReadField<void*>("facing"); }
        void facing(void* value) const { WriteField<void*>("facing", value); }
        float halfLength() const { return ReadField<float>("halfLength"); }
        void halfLength(float value) const { WriteField<float>("halfLength", value); }
        void* clusters() const { return ReadField<void*>("clusters"); }
    };
}
