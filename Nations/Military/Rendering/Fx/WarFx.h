#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Fx
{
    class WarFx : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarFx(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Fx", "WarFx") {}
    public:
        void SetCoarseAlpha(float alpha) const { void* args[] = { &alpha }; Call("SetCoarseAlpha", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Advance(float dt) const { void* args[] = { &dt }; Call("Advance", args, 1); }
        void Draw(void* localToWorld, float zAir, float zGround, float pxPerTile) const { void* args[] = { localToWorld, &zAir, &zGround, &pxPerTile }; Call("Draw", args, 4); }
        void Idle() const { Call("Idle", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void SetFade(float fade) const { void* args[] = { &fade }; Call("SetFade", args, 1); }
        uint32_t Rgba(int r, int g, int b, int a) const { void* args[] = { &r, &g, &b, &a }; return CallStaticValue<uint32_t>("Rgba", args, 4); }
        uint32_t Rgba(void* c, float a) const { void* args[] = { c, &a }; return CallStaticValue<uint32_t>("Rgba", args, 2); }
        void MuzzleFlash(void* at, void* dir, float metres) const { void* args[] = { at, dir, &metres }; Call("MuzzleFlash", args, 3); }
        void ShotSmoke(void* at, void* dir, float metres, bool blackPowder) const { void* args[] = { at, dir, &metres, &blackPowder }; Call("ShotSmoke", args, 4); }
        void Tracer(void* from, void* to, float flight, uint32_t colour, float lengthMetres, bool impact = true) const { void* args[] = { from, to, &flight, &colour, &lengthMetres, &impact }; Call("Tracer", args, 6); }
        void MusketShot(void* from, void* dir, void* to, float flight, float loud = 1f) const { void* args[] = { from, dir, to, &flight, &loud }; Call("MusketShot", args, 5); }
        void RifleShot(void* from, void* dir, void* to, float flight, bool tracer, float loud = 1f) const { void* args[] = { from, dir, to, &flight, &tracer, &loud }; Call("RifleShot", args, 6); }
        void MgBurst(void* from, void* dir, void* to, float flight, int rounds, float spreadMetres, float loud = 1f) const { void* args[] = { from, dir, to, &flight, &rounds, &spreadMetres, &loud }; Call("MgBurst", args, 7); }
        void CannonShot(void* from, void* dir, float metres, bool blackPowder, float loud = 1f) const { void* args[] = { from, dir, &metres, &blackPowder, &loud }; Call("CannonShot", args, 5); }
        void IncomingShell(void* from, void* to, float flight, float blastMetres, bool crater, float loud = 1f) const { void* args[] = { from, to, &flight, &blastMetres, &crater, &loud }; Call("IncomingShell", args, 6); }
        void ShellImpact(void* at, float blastMetres, bool crater, float loud = 1f, float delay = 0f) const { void* args[] = { at, &blastMetres, &crater, &loud, &delay }; Call("ShellImpact", args, 5); }
        void Grenade(void* at, float loud = 1f, float delay = 0f) const { void* args[] = { at, &loud, &delay }; Call("Grenade", args, 3); }
        void Crater(void* at, float metres, float seconds, float delay = 0f) const { void* args[] = { at, &metres, &seconds, &delay }; Call("Crater", args, 4); }
        void Scorch(void* at, float metres, float seconds) const { void* args[] = { at, &metres, &seconds }; Call("Scorch", args, 3); }
        void Blood(void* at, float metres, float seconds) const { void* args[] = { at, &metres, &seconds }; Call("Blood", args, 3); }
        void Smoke(void* at, float metres, uint32_t colour, float seconds, void* vel) const { void* args[] = { at, &metres, &colour, &seconds, vel }; Call("Smoke", args, 5); }
        void Dust(void* at, float metres, float seconds, void* vel) const { void* args[] = { at, &metres, &seconds, vel }; Call("Dust", args, 4); }
        void Glint(void* at, float metres) const { void* args[] = { at, &metres }; Call("Glint", args, 2); }
        void Burning(void* at, float metres) const { void* args[] = { at, &metres }; Call("Burning", args, 2); }
        void FlashUnits(void* at, float sizeUnits, uint32_t colour, float life) const { void* args[] = { at, &sizeUnits, &colour, &life }; Call("FlashUnits", args, 4); }
        void TracerUnits(void* from, void* to, float flight, uint32_t colour, float lengthUnits, float widthUnits, uint32_t impactColour, int sparks) const { void* args[] = { from, to, &flight, &colour, &lengthUnits, &widthUnits, &impactColour, &sparks }; Call("TracerUnits", args, 8); }
        void ImpactSparks(void* at, uint32_t colour, int count, float sizeUnits, float delay) const { void* args[] = { at, &colour, &count, &sizeUnits, &delay }; Call("ImpactSparks", args, 5); }
        void RingUnits(void* at, float fromUnits, float toUnits, uint32_t colour, float life) const { void* args[] = { at, &fromUnits, &toUnits, &colour, &life }; Call("RingUnits", args, 5); }
        void TossUnits(void* at, int count, uint32_t colour, float sizeUnits, float speedUnits, float liftUnits) const { void* args[] = { at, &count, &colour, &sizeUnits, &speedUnits, &liftUnits }; Call("TossUnits", args, 6); }
        void PuffUnits(void* at, float sizeUnits, uint32_t colour, float life, void* vel, bool dust) const { void* args[] = { at, &sizeUnits, &colour, &life, vel, &dust }; Call("PuffUnits", args, 6); }
        void ScorchUnits(void* at, float sizeUnits, float seconds) const { void* args[] = { at, &sizeUnits, &seconds }; Call("ScorchUnits", args, 3); }
        void ShellNow(void* at, float height, float metres) const { void* args[] = { at, &height, &metres }; Call("ShellNow", args, 3); }
        void* Air() const { return ReadField<void*>("Air"); }
        void* Ground() const { return ReadField<void*>("Ground"); }
        float TilesPerMetre() const { return ReadField<float>("TilesPerMetre"); }
        void SetTilesPerMetre(float value) const { WriteField<float>("TilesPerMetre", value); }
        float MinPx() const { return ReadField<float>("MinPx"); }
        void SetMinPx(float value) const { WriteField<float>("MinPx", value); }
        float HeightShift() const { return ReadField<float>("HeightShift"); }
        void SetHeightShift(float value) const { WriteField<float>("HeightShift", value); }
        float SoundLevel() const { return ReadField<float>("SoundLevel"); }
        void SetSoundLevel(float value) const { WriteField<float>("SoundLevel", value); }
        void* Wind() const { return ReadField<void*>("Wind"); }
        void SetWind(void* value) const { WriteField<void*>("Wind", value); }
        float CraterSeconds() const { return ReadField<float>("CraterSeconds"); }
        void SetCraterSeconds(float value) const { WriteField<float>("CraterSeconds", value); }
        float CoarseSmokeAlpha() const { return ReadField<float>("CoarseSmokeAlpha"); }
        void SetCoarseSmokeAlpha(float value) const { WriteField<float>("CoarseSmokeAlpha", value); }
        float at() const { return ReadField<float>("at"); }
        void SetAt(float value) const { WriteField<float>("at", value); }
        int s() const { return ReadField<int>("s"); }
        void SetS(int value) const { WriteField<int>("s", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float loud() const { return ReadField<float>("loud"); }
        void SetLoud(float value) const { WriteField<float>("loud", value); }
    };
}
