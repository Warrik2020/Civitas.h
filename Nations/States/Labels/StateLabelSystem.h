#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::States::Labels
{
    class StateLabelSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateLabelSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States.Labels", "StateLabelSystem") {}
    public:
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        uint8_t KindAt(int index) const { void* args[] = { &index }; return CallValue<uint8_t>("KindAt", args, 1); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* tmp() const { return ReadField<void*>("tmp"); }
        void SetTmp(void* value) const { WriteField<void*>("tmp", value); }
        void* mr() const { return ReadField<void*>("mr"); }
        void SetMr(void* value) const { WriteField<void*>("mr", value); }
        void* warpedFit() const { return ReadField<void*>("warpedFit"); }
        void SetWarpedFit(void* value) const { WriteField<void*>("warpedFit", value); }
        int warpedVersion() const { return ReadField<int>("warpedVersion"); }
        void SetWarpedVersion(int value) const { WriteField<int>("warpedVersion", value); }
        void* wroteColor() const { return ReadField<void*>("wroteColor"); }
        void SetWroteColor(void* value) const { WriteField<void*>("wroteColor", value); }
        bool colorValid() const { return ReadField<bool>("colorValid"); }
        void SetColorValid(bool value) const { WriteField<bool>("colorValid", value); }
        bool shown() const { return ReadField<bool>("shown"); }
        void SetShown(bool value) const { WriteField<bool>("shown", value); }
        void* pts() const { return ReadField<void*>("pts"); }
        void SetPts(void* value) const { WriteField<void*>("pts", value); }
        void* cum() const { return ReadField<void*>("cum"); }
        void SetCum(void* value) const { WriteField<void*>("cum", value); }
        int np() const { return ReadField<int>("np"); }
        void SetNp(int value) const { WriteField<int>("np", value); }
        float xMin() const { return ReadField<float>("xMin"); }
        void SetXMin(float value) const { WriteField<float>("xMin", value); }
        float yMid() const { return ReadField<float>("yMid"); }
        void SetYMid(float value) const { WriteField<float>("yMid", value); }
        float scale() const { return ReadField<float>("scale"); }
        void SetScale(float value) const { WriteField<float>("scale", value); }
        float startArc() const { return ReadField<float>("startArc"); }
        void SetStartArc(float value) const { WriteField<float>("startArc", value); }
        float heightWorld() const { return ReadField<float>("heightWorld"); }
        void SetHeightWorld(float value) const { WriteField<float>("heightWorld", value); }
        void* centre() const { return ReadField<void*>("centre"); }
        void SetCentre(void* value) const { WriteField<void*>("centre", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int styleVersion() const { return ReadField<int>("styleVersion"); }
        void SetStyleVersion(int value) const { WriteField<int>("styleVersion", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        float refreshedAt() const { return ReadField<float>("refreshedAt"); }
        void SetRefreshedAt(float value) const { WriteField<float>("refreshedAt", value); }
        bool valid() const { return ReadField<bool>("valid"); }
        void SetValid(bool value) const { WriteField<bool>("valid", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
    };
}
