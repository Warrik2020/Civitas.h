#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Labels
{
    class IdentityLabelSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityLabelSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Labels", "IdentityLabelSystem") {}
    public:
        uint8_t KindAt(int index) const { void* args[] = { &index }; return CallValue<uint8_t>("KindAt", args, 1); }
        void* tmp() const { return ReadField<void*>("tmp"); }
        void SetTmp(void* value) const { WriteField<void*>("tmp", value); }
        void* mr() const { return ReadField<void*>("mr"); }
        void SetMr(void* value) const { WriteField<void*>("mr", value); }
        void* warpedPiece() const { return ReadField<void*>("warpedPiece"); }
        void SetWarpedPiece(void* value) const { WriteField<void*>("warpedPiece", value); }
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
        bool valid() const { return ReadField<bool>("valid"); }
        void SetValid(bool value) const { WriteField<bool>("valid", value); }
        void* pieces() const { return ReadField<void*>("pieces"); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int styleVersion() const { return ReadField<int>("styleVersion"); }
        void SetStyleVersion(int value) const { WriteField<int>("styleVersion", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        float refreshedAt() const { return ReadField<float>("refreshedAt"); }
        void SetRefreshedAt(float value) const { WriteField<float>("refreshedAt", value); }
        int key() const { return ReadField<int>("key"); }
        void SetKey(int value) const { WriteField<int>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        int minX() const { return ReadField<int>("minX"); }
        void SetMinX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void SetMinY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void SetMaxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void SetMaxY(int value) const { WriteField<int>("maxY", value); }
        int64_t tiles() const { return ReadField<int64_t>("tiles"); }
        void SetTiles(int64_t value) const { WriteField<int64_t>("tiles", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        void* identity() const { return ReadField<void*>("identity"); }
        void SetIdentity(void* value) const { WriteField<void*>("identity", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        void* unitOfGroup() const { return ReadField<void*>("unitOfGroup"); }
        void SetUnitOfGroup(void* value) const { WriteField<void*>("unitOfGroup", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
    };
}
