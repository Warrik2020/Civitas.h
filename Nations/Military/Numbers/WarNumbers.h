#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Numbers
{
    class WarNumbers : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarNumbers(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Numbers", "WarNumbers") {}
    public:
        int64_t Key(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallStaticValue<int64_t>("Key", args, 2); }
        void Build(void* stretches, float cellTiles) const { void* args[] = { stretches, &cellTiles }; Call("Build", args, 2); }
        int Nearest(void* p, float radius) const { void* args[] = { p, &radius }; return CallValue<int>("Nearest", args, 2); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        void* points() const { return ReadField<void*>("points"); }
        float length() const { return ReadField<float>("length"); }
        void SetLength(float value) const { WriteField<float>("length", value); }
        float men() const { return ReadField<float>("men"); }
        void SetMen(float value) const { WriteField<float>("men", value); }
        bool covered() const { return ReadField<bool>("covered"); }
        void SetCovered(bool value) const { WriteField<bool>("covered", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        bool anchored() const { return ReadField<bool>("anchored"); }
        void SetAnchored(bool value) const { WriteField<bool>("anchored", value); }
        void* mid() const { return ReadField<void*>("mid"); }
        void SetMid(void* value) const { WriteField<void*>("mid", value); }
        void* along() const { return ReadField<void*>("along"); }
        void SetAlong(void* value) const { WriteField<void*>("along", value); }
        void* inward() const { return ReadField<void*>("inward"); }
        void SetInward(void* value) const { WriteField<void*>("inward", value); }
        float noise() const { return ReadField<float>("noise"); }
        void SetNoise(float value) const { WriteField<float>("noise", value); }
        float span() const { return ReadField<float>("span"); }
        void SetSpan(float value) const { WriteField<float>("span", value); }
        float cell() const { return ReadField<float>("cell"); }
        void SetCell(float value) const { WriteField<float>("cell", value); }
        void* next() const { return ReadField<void*>("next"); }
        void* pos() const { return ReadField<void*>("pos"); }
        void* owner() const { return ReadField<void*>("owner"); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int frontVersion() const { return ReadField<int>("frontVersion"); }
        void SetFrontVersion(int value) const { WriteField<int>("frontVersion", value); }
        int foeSig() const { return ReadField<int>("foeSig"); }
        void SetFoeSig(int value) const { WriteField<int>("foeSig", value); }
        float builtAt() const { return ReadField<float>("builtAt"); }
        void SetBuiltAt(float value) const { WriteField<float>("builtAt", value); }
        void* stretches() const { return ReadField<void*>("stretches"); }
        void* grid() const { return ReadField<void*>("grid"); }
    };
}
